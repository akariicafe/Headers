@class NSString;

@interface _MNTimepointAndTransportType : MNTimepoint <MNJSONOutput, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int transportType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 date:(id)a1 transportType:(int)a2;

@end
