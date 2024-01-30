@class NSString, NSArray;

@interface LTUISourceMeta : NSObject

@property (nonatomic) unsigned long long origin;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSArray *languageHints;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
