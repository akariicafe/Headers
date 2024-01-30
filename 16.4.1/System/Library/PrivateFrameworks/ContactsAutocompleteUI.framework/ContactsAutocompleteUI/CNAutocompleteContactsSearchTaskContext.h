@class NSString, NSMutableSet;
@protocol CNAutocompleteSearchConsumer;

@interface CNAutocompleteContactsSearchTaskContext : NSObject

@property (readonly, nonatomic) id<CNAutocompleteSearchConsumer> consumer;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSMutableSet *operations;
@property (readonly, nonatomic) NSMutableSet *searchQueries;

+ (id)contextWithConsumer:(id)a0 text:(id)a1 operations:(id)a2 searchQueries:(id)a3;

- (BOOL)done;
- (void).cxx_destruct;
- (BOOL)consumerRespondsToCallbacks;

@end
