@class NSString;

@interface CLSCachedContact : NSObject

@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL hasPicture;
@property (retain, nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID;
@property (nonatomic) double updateTimestamp;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
