@class NSData;

@interface VRXResponse : NSObject

@property (readonly, nonatomic) NSData *model;
@property (readonly, nonatomic) long long responseType;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0 responseType:(long long)a1;

@end
