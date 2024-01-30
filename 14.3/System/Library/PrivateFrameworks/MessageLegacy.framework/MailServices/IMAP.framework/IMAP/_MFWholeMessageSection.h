@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>

@property (retain, nonatomic) MFDataHolder *dataHolder;

- (void)dealloc;
- (BOOL)isPartial;
- (BOOL)isComplete;
- (id)partName;

@end
