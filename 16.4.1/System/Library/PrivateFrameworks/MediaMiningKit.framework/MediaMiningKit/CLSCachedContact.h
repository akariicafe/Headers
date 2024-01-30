@class NSString;

@interface CLSCachedContact : NSObject

@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL hasPicture;
@property (retain, nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID;
@property (nonatomic) double updateTimestamp;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
