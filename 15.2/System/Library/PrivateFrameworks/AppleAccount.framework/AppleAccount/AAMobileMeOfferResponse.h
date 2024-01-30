@class NSNumber, NSString;

@interface AAMobileMeOfferResponse : AAResponse

@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *classicTitle;
@property (readonly, nonatomic) NSString *classicMessage;

@end
