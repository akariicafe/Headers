@class NSString, NSArray;

@interface FeedbackCore.FBKQuestionGroupDiffableSection : FBKDiffableSection {
    void /* unknown type, empty encoding */ questionIdentifiers;
    void /* unknown type, empty encoding */ orderedRowIdentifiers;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ questionGroup;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) NSArray *rowIdentifiers;

+ (id)identifierForQuestion:(id)a0 formResponse:(id)a1 questionIDsInErrorState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQuestionGroup:(id)a0 visibleQuestions:(id)a1 formResponse:(id)a2 questionIDsInErrorState:(id)a3;
- (id)questionWithRowIdentifier:(id)a0;
- (id)visibleQuestions;

@end
