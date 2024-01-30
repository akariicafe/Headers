@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>

@property (retain, nonatomic) MFDataHolder *dataHolder;

- (BOOL)isComplete;
- (id)partName;
- (void).cxx_destruct;
- (BOOL)isPartial;

@end
