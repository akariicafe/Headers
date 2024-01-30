@class NSString, PHFetchResult, PGManager;

@interface PGMergeCandidateQuestionFactory : NSObject <PGQuestionFactory>

@property (retain, nonatomic) PHFetchResult *persons;
@property (retain, nonatomic) PGManager *manager;
@property (readonly, nonatomic) long long questionOptions;
@property (readonly, nonatomic) unsigned short questionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
