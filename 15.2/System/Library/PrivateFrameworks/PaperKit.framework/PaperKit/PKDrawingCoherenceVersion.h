@interface PKDrawingCoherenceVersion : NSObject <PKDrawingVersion> {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ context;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
