@class NSData, NSArray, HKQueryAnchor;

@interface HKSampleIteratorQueryCursor : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_queryDescriptors;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    NSData *_state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *state;
@property (readonly, copy, nonatomic) NSArray *queryDescriptors;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, copy, nonatomic) HKQueryAnchor *followingAnchor;
@property (readonly, copy, nonatomic) HKQueryAnchor *upToAndIncludingAnchor;
@property (readonly, copy, nonatomic) NSArray *distinctByKeyPaths;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryDescriptors:(id)a0 sortDescriptors:(id)a1 followingAnchor:(id)a2 upToAndIncludingAnchor:(id)a3 distinctByKeyPaths:(id)a4;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithQueryDescriptors:(id)a0 sortDescriptors:(id)a1 followingAnchor:(id)a2 upToAndIncludingAnchor:(id)a3 distinctByKeyPaths:(id)a4 state:(id)a5;
- (void).cxx_destruct;

@end
