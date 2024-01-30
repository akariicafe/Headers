@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (retain) NSString *description;
@property (retain) NSString *summary;

+ (id)metadataWithData:(id)a0;

- (id)initWithICSAlarm:(id)a0;
- (void)applyToAlarm:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
