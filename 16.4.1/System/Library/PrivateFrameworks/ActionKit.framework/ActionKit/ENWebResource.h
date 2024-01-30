@class NSData, NSURL, NSString;

@interface ENWebResource : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) NSString *textEncodingName;
@property (copy, nonatomic) NSString *frameName;

+ (id)webResourceWithDictionary:(id)a0;

- (id)propertyList;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;

@end
