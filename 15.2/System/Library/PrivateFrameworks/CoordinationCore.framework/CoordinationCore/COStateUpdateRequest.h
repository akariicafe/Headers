@class NSDictionary;

@interface COStateUpdateRequest : COMeshRequest <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *updates;
@property (readonly, copy, nonatomic) NSDictionary *removals;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUpdates:(id)a0 removals:(id)a1;

@end
