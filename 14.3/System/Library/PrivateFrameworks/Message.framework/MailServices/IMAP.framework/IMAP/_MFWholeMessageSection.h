@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>

@property (retain, nonatomic) MFDataHolder *dataHolder;

- (void).cxx_destruct;
- (BOOL)isPartial;
- (BOOL)isComplete;
- (id)partName;

@end
