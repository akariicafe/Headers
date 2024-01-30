@class NSString, NSMutableSet;
@protocol MFContactsSearchConsumer;

@interface MFContactsSearchTaskContext : NSObject

@property (readonly, nonatomic) id<MFContactsSearchConsumer> consumer;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSMutableSet *operations;
@property (readonly, nonatomic) NSMutableSet *searchQueries;

+ (id)contextWithConsumer:(id)a0 text:(id)a1 operations:(id)a2 searchQueries:(id)a3;

- (BOOL)done;
- (void).cxx_destruct;
- (BOOL)consumerRespondsToCallbacks;

@end
