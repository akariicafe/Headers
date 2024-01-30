@interface PLModelMigratorRebuildProgressFraction : NSObject {
    BOOL _legacyRecoveryEnabled;
}

@property (nonatomic, getter=isRebuildEnabled) BOOL rebuildEnabled;
@property (readonly) BOOL isLegacyRecoveryEnabled;

- (id)initWithLegacyRecoveryEnabled:(BOOL)a0;
- (float)progressFractionForType:(unsigned char)a0;

@end
