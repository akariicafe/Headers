@class NSString;
@protocol SAElementIdentifying;

@interface _SBSystemApertureElementLayoutState : NSObject <SAElementIdentifying>

@property (readonly, copy, nonatomic) id<SAElementIdentifying> elementIdentification;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithElementIdentification:(id)a0 layoutMode:(long long)a1;

@end
