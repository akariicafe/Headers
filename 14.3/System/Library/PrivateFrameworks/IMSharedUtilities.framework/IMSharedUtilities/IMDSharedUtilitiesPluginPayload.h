@class NSString, NSArray, NSData, NSURL;

@interface IMDSharedUtilitiesPluginPayload : NSObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) id dataDetectedResult;
@property (retain, nonatomic) NSURL *url;
@property (weak, nonatomic) id datasource;
@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) BOOL isFromMe;

- (void).cxx_destruct;
- (void)dealloc;

@end
