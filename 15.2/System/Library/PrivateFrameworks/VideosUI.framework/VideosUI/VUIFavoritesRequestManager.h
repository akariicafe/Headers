@class NSMutableDictionary;

@interface VUIFavoritesRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingEntityIDOperationDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)sendRequestForEntityID:(id)a0 teamName:(id)a1 action:(unsigned long long)a2;

@end
