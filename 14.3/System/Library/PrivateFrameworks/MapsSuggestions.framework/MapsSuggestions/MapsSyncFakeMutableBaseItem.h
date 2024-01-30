@class NSUUID, NSString;

@interface MapsSyncFakeMutableBaseItem : NSObject <MapsSyncMutableBaseItem>

@property (copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
