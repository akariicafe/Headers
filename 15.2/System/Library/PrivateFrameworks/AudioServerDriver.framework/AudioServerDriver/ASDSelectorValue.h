@class NSString;

@interface ASDSelectorValue : NSObject

@property (nonatomic) unsigned int value;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
