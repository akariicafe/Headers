@class NSString;

@interface TPSContextualContentStatusEvent : TPSContextualEvent

@property (nonatomic) long long statusType;
@property (copy, nonatomic) NSString *contentID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (unsigned int)minObservationCount;
- (void)updateStatusTypeIfOutOfBound;

@end
