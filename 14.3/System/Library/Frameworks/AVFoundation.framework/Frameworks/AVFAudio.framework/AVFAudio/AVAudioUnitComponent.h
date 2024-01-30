@class NSString, NSArray, NSURL, NSDictionary;

@interface AVAudioUnitComponent : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSString *localizedTypeName;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *versionString;
@property (readonly, nonatomic) NSURL *componentURL;
@property (readonly, nonatomic) NSArray *availableArchitectures;
@property (readonly, nonatomic, getter=isSandboxSafe) BOOL sandboxSafe;
@property (readonly, nonatomic) BOOL hasMIDIInput;
@property (readonly, nonatomic) BOOL hasMIDIOutput;
@property (readonly, nonatomic) struct OpaqueAudioComponent { } *audioComponent;
@property (copy) NSArray *userTagNames;
@property (readonly, nonatomic) NSArray *allTagNames;
@property (readonly, nonatomic) struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } audioComponentDescription;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) BOOL passesAUVal;
@property (readonly, nonatomic) BOOL hasCustomView;
@property (readonly, nonatomic) NSDictionary *configurationDictionary;

- (void)localeChanged;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 withAVAUManagerImpl:(struct AVAudioUnitComponentManagerImpl { void /* function */ **x0; id x1; id x2; id x3; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x4; } *)a1;
- (BOOL)supportsNumberInputChannels:(long long)a0 outputChannels:(long long)a1;
- (id)GetTypeName:(unsigned int)a0;
- (BOOL)isComponentDescriptionMatch:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;

@end
