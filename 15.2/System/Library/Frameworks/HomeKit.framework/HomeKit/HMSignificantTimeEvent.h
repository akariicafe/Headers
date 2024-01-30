@class NSString, NSDateComponents;

@interface HMSignificantTimeEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *offset;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)updateSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSignificantEvent:(id)a0 offset:(id)a1;
- (id)initWithDict:(id)a0 significantEvent:(id)a1 offset:(id)a2;
- (void)updateOffset:(id)a0 completionHandler:(id /* block */)a1;

@end
