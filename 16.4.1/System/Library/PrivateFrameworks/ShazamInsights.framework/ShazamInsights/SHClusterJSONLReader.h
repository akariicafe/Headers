@class NSString;

@interface SHClusterJSONLReader : NSObject <SHJSONLDataDetokenizerDelegate>

@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
