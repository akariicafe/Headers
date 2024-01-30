@class NSString, NSDate;

@interface _MultiplatformDonationRecencyInfo : NSObject

@property (copy, nonatomic) NSString *remoteBundleIdentifier;
@property (copy, nonatomic) NSString *localBundleIdentifier;
@property (retain, nonatomic) NSDate *remoteDonationCreationDate;
@property (retain, nonatomic) NSDate *localDonationCreationDate;

- (void).cxx_destruct;
- (id)identifierForMostRecentData;

@end
