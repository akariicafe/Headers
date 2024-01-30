@class NSTimeZone, NSString, NSArray, NSDate, CLLocation;

@interface PFMetadataBuilder : NSObject <PFMetadataBuilder>

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSTimeZone *creationTimeZone;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSArray *peopleNames;
@property (copy, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
