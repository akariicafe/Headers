@class NSArray, HKQueryAnchor, NSData;

@interface HKMultiTypeQueryCursor : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_sampleQueryDescriptions;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    NSData *_state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sampleQueryDescriptions;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, copy, nonatomic) HKQueryAnchor *followingAnchor;
@property (readonly, copy, nonatomic) HKQueryAnchor *upToAndIncludingAnchor;
@property (readonly, copy, nonatomic) NSArray *distinctByKeyPaths;
@property (readonly, copy, nonatomic) NSData *state;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSampleQueryDescriptions:(id)a0 sortDescriptors:(id)a1 followingAnchor:(id)a2 upToAndIncludingAnchor:(id)a3 distinctByKeyPaths:(id)a4 state:(id)a5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
