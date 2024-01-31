@class NSString, NSData, NSDate, CNContactImage;

@interface CNContactPoster : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *posterData;
@property (readonly, nonatomic) NSDate *lastUsedDate;
@property (nonatomic) BOOL ignoredForRevert;
@property (retain, nonatomic) NSData *visualFingerprintData;
@property (retain, nonatomic) CNContactImage *pairedImage;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 posterData:(id)a1 lastUsedDate:(id)a2;
- (id)initWithPosterData:(id)a0 lastUsedDate:(id)a1;
- (id)copyWithNewPosterData:(id)a0;

@end
