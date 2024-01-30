@class NSString, NSDictionary;

@interface HMMTaggedEvent : NSObject

@property (readonly, nonatomic) NSString *tagName;
@property (readonly, nonatomic) unsigned long long tagTime;
@property (readonly, nonatomic) NSDictionary *tagData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTag:(id)a0 data:(id)a1;
- (id)initWithTag:(id)a0 time:(unsigned long long)a1 data:(id)a2;

@end
