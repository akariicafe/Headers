@class NSNumber, NSString;

@interface TBTileItemDescriptor : NSObject <TBTileRequestItem>

@property (retain, nonatomic) NSNumber *key;
@property (copy, nonatomic) NSString *etag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tileItemDescriptorWithKey:(id)a0;

- (id)initWithKey:(id)a0 etag:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
