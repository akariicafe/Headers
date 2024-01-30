@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection>

@property (nonatomic, getter=isPartial) BOOL partial;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (retain, nonatomic) MFDataHolder *dataHolder;
@property (retain, nonatomic) NSString *partName;

- (void).cxx_destruct;
- (void)setData:(id)a0;

@end
