@class NSString, NSObject;
@protocol ACHTemplateSourceDelegate;

@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateSource>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
