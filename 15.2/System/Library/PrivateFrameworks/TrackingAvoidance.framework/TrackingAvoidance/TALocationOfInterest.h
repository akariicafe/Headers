@class NSString, NSDate;

@interface TALocationOfInterest : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) unsigned long long referenceFrame;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (id)getDate;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 referenceFrame:(unsigned long long)a4 date:(id)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 date:(id)a4;

@end
