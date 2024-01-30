@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput>

@property (retain, nonatomic) id byteStream;
@property (retain, nonatomic) NSString *stringData;
@property (retain, nonatomic) NSString *encoding;
@property (nonatomic) BOOL certifiedText;

- (void).cxx_destruct;

@end
