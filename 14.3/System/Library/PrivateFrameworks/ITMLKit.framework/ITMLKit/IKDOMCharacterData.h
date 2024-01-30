@class NSString;

@interface IKDOMCharacterData : IKDOMNode <IKJSDOMCharacterData>

@property (retain, nonatomic) NSString *data;
@property (readonly, nonatomic) unsigned long long length;

@end
