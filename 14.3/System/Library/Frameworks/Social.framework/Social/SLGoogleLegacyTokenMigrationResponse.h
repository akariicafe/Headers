@class NSError, NSString;

@interface SLGoogleLegacyTokenMigrationResponse : NSObject

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSString *responseBody;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
