@class NSString;

@interface BCSInvalidParsedData : NSObject <BCSParsedDataPrivate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long invalidDataType;
@property (copy, nonatomic) NSString *invalidContents;
@property (copy, nonatomic) NSString *invalidURLScheme;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
