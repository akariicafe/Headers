@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>

@property (retain, nonatomic) MFDataHolder *dataHolder;

- (BOOL)isComplete;
- (id)partName;
- (void)dealloc;
- (BOOL)isPartial;

@end
