@class NSError;

@interface ATResponse : ATMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPartial) BOOL partial;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)additionalDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
