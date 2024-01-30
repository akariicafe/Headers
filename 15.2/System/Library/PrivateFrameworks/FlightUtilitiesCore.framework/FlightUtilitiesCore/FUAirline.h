@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *IATACode;
@property (retain) NSString *FAACode;
@property (retain) NSString *name;
@property (retain) NSString *phoneNumber;
@property (retain) NSURL *URL;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
