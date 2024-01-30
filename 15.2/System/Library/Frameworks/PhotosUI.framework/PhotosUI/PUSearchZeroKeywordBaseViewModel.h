@class NSString, NSDictionary;

@interface PUSearchZeroKeywordBaseViewModel : NSObject

@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id representedObject;
@property (readonly, nonatomic) id displayInfo;
@property (readonly, nonatomic) NSDictionary *debugDictionary;

- (id)initForTesting;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 title:(id)a1 representedObject:(id)a2 displayInfo:(id)a3;

@end
