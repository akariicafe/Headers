@class NSString, NSMutableDictionary;

@interface MRClientDiagnosticsDataSource : NSObject

@property (class, readonly, nonatomic) MRClientDiagnosticsDataSource *sharedDataSource;

@property (readonly, nonatomic) NSMutableDictionary *map;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSString *diagnostic;

- (void)add:(id)a0;
- (void)remove:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
