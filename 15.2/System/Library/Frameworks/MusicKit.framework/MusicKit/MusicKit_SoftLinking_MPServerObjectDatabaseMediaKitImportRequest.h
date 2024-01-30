@class ICUserIdentity, MPServerObjectDatabaseMediaKitImportRequest, NSDate;

@interface MusicKit_SoftLinking_MPServerObjectDatabaseMediaKitImportRequest : NSObject {
    MPServerObjectDatabaseMediaKitImportRequest *_underlyingImportRequest;
}

@property (readonly, nonatomic) MPServerObjectDatabaseMediaKitImportRequest *_underlyingImportRequest;
@property (readonly, nonatomic) id payload;
@property (retain, nonatomic) ICUserIdentity *userIdentity;
@property (copy, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;

@end
