@class NSString;

@interface MNNanoFormattedStringFormatter : NSObject <GEOServerFormattedStepStringFormatter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFormatter;

- (id)listInstructionForStep:(id)a0;
- (id)signInstructionsForStep:(id)a0;

@end
