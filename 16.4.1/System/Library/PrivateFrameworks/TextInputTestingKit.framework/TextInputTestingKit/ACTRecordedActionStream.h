@class ACTUserMentalCursor, NSArray, TTKTestCase, NSString, TIErrorGenerator, TIKeyboardTyperUserModel;
@protocol ACTUserActionStreaming, ACTUserActionStreamDelegate;

@interface ACTRecordedActionStream : NSObject <ACTUserActionStreaming>

@property (retain, nonatomic) ACTUserMentalCursor *cursor;
@property (nonatomic) double lastTimestamp;
@property (retain, nonatomic) TTKTestCase *testCase;
@property (retain, nonatomic) NSArray *touchEventsForInputSegments;
@property (nonatomic) unsigned long long touchEventCursor;
@property (retain) id<ACTUserActionStreaming> dataSynthesizer;
@property (nonatomic) id<ACTUserActionStreamDelegate> delegate;
@property (copy, nonatomic) NSString *intendedText;
@property (retain, nonatomic) TIErrorGenerator *errorGenerator;
@property (retain, nonatomic) TIKeyboardTyperUserModel *userModel;
@property (nonatomic) unsigned int randomNumberSeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userActionStreamWithParameters:(id)a0 delegate:(id)a1;

- (id)initWithParameters:(id)a0 delegate:(id)a1;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)configureWithParameters:(id)a0;
- (BOOL)inPartialCandidateSelection;
- (id)nextUserAction;
- (void)resetForIntendedSegments:(id)a0 expectedSegments:(id)a1;
- (void)stepCursor;

@end
