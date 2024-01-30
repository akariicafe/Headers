@class NSString;

@interface WAURLData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *url;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0;

@end
