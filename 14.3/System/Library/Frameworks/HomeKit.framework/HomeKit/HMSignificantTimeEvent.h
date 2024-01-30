@class NSString, NSDateComponents;

@interface HMSignificantTimeEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *offset;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDict:(id)a0 significantEvent:(id)a1 offset:(id)a2;
- (void)_update:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateOffset:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSignificantEvent:(id)a0 offset:(id)a1;
- (void)updateOffset:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
