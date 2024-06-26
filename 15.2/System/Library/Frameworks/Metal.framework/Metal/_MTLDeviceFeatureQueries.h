@class NSString;
@protocol MTLDeviceSPI;

@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries {
    struct { NSString *name; long long requirement; BOOL supported; } _featureInfo[164];
    BOOL isAGX;
    id<MTLDeviceSPI> _device;
}

- (BOOL)supportsLossyCompression;
- (BOOL)supportsTileShaders;
- (BOOL)supportsPlacementHeaps;
- (BOOL)supportsBufferWithIOSurface;
- (BOOL)supportsLargeFramebufferConfigs;
- (BOOL)supportsArgumentBuffersTier2;
- (BOOL)supportsExtendedYUVFormats;
- (BOOL)supportsNativeHardwareFP16;
- (BOOL)supportsSIMDGroupMatrix;
- (BOOL)supportsLinearTextureFromSharedBuffer;
- (BOOL)supportsComputeCompressedTextureWrite;
- (BOOL)supportsPacked32TextureBufferWrites;
- (BOOL)supportsPipelineLibraries;
- (BOOL)supportsLayeredRendering;
- (id)initWithDevice:(id)a0;
- (BOOL)supportsDevicePartitioning;
- (BOOL)supportsIndirectTessellation;
- (BOOL)supportsGPUStatistics;
- (BOOL)supportsSIMDShufflesAndBroadcast;
- (BOOL)supportsAlphaYUVFormats;
- (BOOL)supportsMemoryOrderAtomics;
- (void)validate;
- (BOOL)supportsReadWriteTextureCubeArguments;
- (BOOL)supportsFragmentBufferWrites;
- (BOOL)supportsSIMDReduction;
- (BOOL)supportsRTZRounding;
- (BOOL)supports3DASTCTextures;
- (BOOL)supportsIndirectWritableTextures;
- (BOOL)supportsIndirectStageInRegion;
- (BOOL)supportsNonUniformThreadgroupSize;
- (BOOL)supportsPrimitiveMotionBlur;
- (BOOL)supportsQuadReduction;
- (BOOL)supportsStencilFeedback;
- (BOOL)supportsQuadGroup;
- (BOOL)supportsImageBlockSampleCoverageControl;
- (BOOL)supportsConcurrentComputeDispatch;
- (BOOL)supportsFloat16InfNanFiltering;
- (BOOL)supportsPostDepthCoverage;
- (BOOL)supportsBinaryLibraries;
- (BOOL)supportsRasterOrderGroupsColorAttachment;
- (BOOL)supportsShaderMinLODClamp;
- (BOOL)supportsGlobalVariableRelocationCompute;
- (BOOL)supportsRenderToLinearTextures;
- (BOOL)supportsMutableTier1ArgumentBuffers;
- (BOOL)supportsSharedTextureHandles;
- (BOOL)supportsRasterOrderGroups;
- (BOOL)supportsRenderTargetTextureRotation;
- (BOOL)supportsRaytracingFromRender;
- (BOOL)supportsStreamingCodecSignaling;
- (BOOL)supportsIABHashForTools;
- (BOOL)supportsFunctionPointers;
- (BOOL)supports32BitMSAA;
- (BOOL)supportsAtomicUlongVoidMinMax;
- (BOOL)supportForFeature:(long long)a0;
- (BOOL)supportsSIMDShuffleAndFill;
- (BOOL)supportsInvariantVertexPosition;
- (BOOL)supportsMemorylessRenderTargets;
- (BOOL)supportsYCBCRFormatsXR;
- (BOOL)supportsIndirectDrawAndDispatch;
- (BOOL)supportsYCBCRPackedFormatsPQ;
- (BOOL)supportsSparseDepthAttachments;
- (BOOL)supportsProgrammableBlending;
- (BOOL)supportsBlackOrWhiteSamplerBorderColors;
- (BOOL)supportsExtendedXR10Formats;
- (BOOL)supportsQuadShufflesAndBroadcast;
- (BOOL)supportsMSAADepthResolveFilter;
- (BOOL)supportsInterchangeTiled;
- (BOOL)supportsMirrorClampToEdgeSamplerMode;
- (BOOL)supportsBinaryArchives;
- (id)nameForFeature:(long long)a0;
- (BOOL)supportsViewportAndScissorArray;
- (BOOL)supportsCommandBufferJump;
- (BOOL)supportsDepthClipModeClampExtended;
- (BOOL)supportsArrayOfTextures;
- (BOOL)supportsInt64;
- (BOOL)supportsSamplerCompareFunction;
- (BOOL)supports2DLinearTexArraySPI;
- (BOOL)supportsBufferBoundsChecking;
- (BOOL)supportsSIMDGroup;
- (BOOL)supportsNorm16BCubicFiltering;
- (BOOL)supportsForkJoin;
- (BOOL)supportsRenderMemoryBarrier;
- (BOOL)supportsBfloat16Format;
- (BOOL)supportsSharedStorageTextures;
- (BOOL)supportsVertexAmplification;
- (BOOL)supportsReadWriteTextureArguments;
- (BOOL)supportsRenderTextureWrites;
- (BOOL)supportsCountingOcclusionQuery;
- (BOOL)supportsSeparateVisibilityAndShadingRate;
- (BOOL)supportsFixedLinePointFillDepthGradient;
- (BOOL)supportsImageBlocks;
- (BOOL)supportsFastMathInfNaNPropagation;
- (BOOL)supportsSparseHeaps;
- (BOOL)supportsStackOverflowErrorCode;
- (BOOL)supportsFragmentOnlyEncoders;
- (BOOL)supportsReadWriteBufferArguments;
- (BOOL)supportsTextureCubeArray;
- (BOOL)supportsYCBCRFormats12;
- (BOOL)supportsRelaxedTextureViewRequirements;
- (BOOL)supportsCombinedMSAAStoreAndResolveAction;
- (BOOL)supportsVariableRateRasterization;
- (BOOL)supportsRenderDynamicLibraries;
- (BOOL)supportsNonPrivateDepthStencilTextures;
- (BOOL)supportsGlobalVariableRelocationRender;
- (BOOL)supportsSRGBwrites;
- (BOOL)supportsASTCHDRTextureCompression;
- (BOOL)supportsBufferlessClientStorageTexture;
- (BOOL)supportsIndirectTextures;
- (BOOL)supportsYCBCRFormatsPQ;
- (BOOL)supportsYCBCRPackedFormats12;
- (BOOL)supportsComputeMemoryBarrier;
- (BOOL)supportsMSAADepthResolve;
- (BOOL)supportsCompressedTextureViewSPI;
- (BOOL)supportsOpenCLTextureWriteSwizzles;
- (BOOL)supportsTLS;
- (BOOL)supportsWritableArrayOfTextures;
- (BOOL)supportsMSAAStencilResolve;
- (BOOL)supportsRGBA10A2Gamma;
- (BOOL)supportsGlobalVariableRelocation;
- (BOOL)supportsPrimitiveRestartOverride;
- (BOOL)supportsDynamicLibraries;
- (BOOL)supportsMipLevelsSmallerThanBlockSize;
- (BOOL)supportsASTCTextureCompression;
- (BOOL)supportsTextureOutOfBoundsReads;
- (BOOL)supportsTessellation;
- (BOOL)supportsBaseVertexInstanceDrawing;
- (BOOL)supportsSamplerAddressModeClampToHalfBorder;
- (BOOL)supportsGFXIndirectCommandBuffers;
- (BOOL)supportsPullModelInterpolation;
- (BOOL)supportsSharedFunctionTables;
- (BOOL)supportsFP32TessFactors;
- (BOOL)supportsSeparateDepthStencil;
- (BOOL)supportsTexture2DMultisampleArray;
- (BOOL)supportsStatefulDynamicLibraries;
- (BOOL)supportsCustomBorderColor;
- (BOOL)supportsLateEvalEvent;
- (BOOL)supportsSharedStorageHeapResources;
- (BOOL)supportsArrayOfSamplers;
- (BOOL)supportsPublicXR10Formats;
- (BOOL)supports32BitFloatFiltering;
- (BOOL)supportsShaderBarycentricCoordinates;
- (BOOL)supportsYCBCRFormats;
- (long long)requirementForFeature:(long long)a0;
- (BOOL)supportsBCTextureCompression;
- (BOOL)supportsDynamicControlPointCount;
- (BOOL)supportsLinearTexture2DArray;
- (BOOL)supportsUnalignedVertexFetch;
- (BOOL)supportsNonZeroTextureWriteLOD;
- (BOOL)supportsProgrammableSamplePositions;
- (BOOL)supportsDepthClipMode;
- (BOOL)supportsQueryTextureLOD;
- (BOOL)supportsAnisoSampleFix;
- (BOOL)supports3DBCTextures;
- (BOOL)supportsSparseTextures;
- (BOOL)supportsForceSeamsOnCubemaps;
- (BOOL)supportsNonSquareTileShaders;
- (BOOL)supportsFunctionPointersFromRender;
- (BOOL)supportsBufferPrefetchStatistics;
- (BOOL)supportsTextureSwizzle;
- (BOOL)supportsRenderPassWithoutRenderTarget;
- (BOOL)supportsNonPrivateMSAATextures;
- (BOOL)supportsReadWriteTextureArgumentsTier2;
- (BOOL)supportsFloat16BCubicFiltering;
- (BOOL)supportsMSAAStencilResolveFilter;
- (BOOL)supportsLimitedYUVFormats;
- (BOOL)supportsShaderLODAverage;
- (BOOL)supportsYCBCRPackedFormatsXR;
- (BOOL)supports32bpcMSAATextures;
- (BOOL)supportsCMPIndirectCommandBuffers;

@end
