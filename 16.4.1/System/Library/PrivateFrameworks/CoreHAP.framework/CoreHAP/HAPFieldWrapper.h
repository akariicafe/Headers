@class NSString;

@interface HAPFieldWrapper : HMFObject

@property (nonatomic) long long tlvid;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithTlvId:(unsigned long long)a0 name:(id)a1;

@end
