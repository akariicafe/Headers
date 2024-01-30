@class NSString;

@interface ASDSelectorValue : NSObject

@property (nonatomic) unsigned int value;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
