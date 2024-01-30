@class NSString, NSDictionary;

@interface DocumentUnderstanding.DUStructuredEntity : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ phoneNumber;
    void /* unknown type, empty encoding */ phoneNumberLabel;
    void /* unknown type, empty encoding */ email;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ addressComponents;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *phoneNumberLabel;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, retain) void /* unknown type, empty encoding */ calendarEvent;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
